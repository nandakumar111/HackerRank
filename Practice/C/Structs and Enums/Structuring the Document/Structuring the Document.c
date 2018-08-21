void add_word(struct sentence *sen, char *data) {
    struct word *word = malloc(sizeof(struct word));
    word->data = data;

    sen->data = (struct word *) realloc(sen->data, sizeof(struct word) * (sen->word_count + 1));
    sen->data[sen->word_count] = *word;
    sen->word_count++;
}

void add_sentence(struct paragraph *par, char *data) {
    size_t offs = 0;
    size_t size = strlen(data);

    struct sentence *sen = malloc(sizeof(struct sentence));
    sen->data = NULL;
    sen->word_count = 0;

    while (offs < size) {
        char *s = strchr(data + offs, ' ');
        size_t len = s == NULL ? size - offs : s - data - offs;

        char *word = malloc((len + 1) * sizeof(char));
        memset(word, '\0', (len + 1) * sizeof(char));
        strncpy(word, data + offs, len);

        add_word(sen, word);
        offs += len + 1;
    }

    par->data = (struct sentence *) realloc(par->data, sizeof(struct sentence) * (par->sentence_count + 1));
    par->data[par->sentence_count] = *sen;
    par->sentence_count++;
}

void add_paragraph(struct document *doc, char *data) {
    size_t offs = 0;
    size_t size = strlen(data);

    struct paragraph *par = malloc(sizeof(struct paragraph));
    par->data = NULL;
    par->sentence_count = 0;

    while (offs < size) {
        char *s = strchr(data + offs, '.');
        size_t len = s == NULL ? size - offs : s - data - offs;

        char *sentence = malloc((len + 1) * sizeof(char));
        memset(sentence, '\0', (len + 1) * sizeof(char));
        strncpy(sentence, data + offs, len);

        add_sentence(par, sentence);
        offs += len + 1;
    }

    doc->data = (struct paragraph *) realloc(doc->data, sizeof(struct paragraph) * (doc->paragraph_count + 1));
    doc->data[doc->paragraph_count] = *par;
    doc->paragraph_count++;
}
struct document get_document(char* text) {
     struct document *doc = malloc(sizeof(struct document));
    doc->data = NULL;
    doc->paragraph_count = 0;

    size_t offs = 0;
    size_t size = strlen(text);

    while (offs < size) {
        char *s = strchr(text + offs, '\n');
        size_t len = s == NULL ? size - offs : s - text - offs;

        char *paragraph = malloc((len + 1) * sizeof(char));
        memset(paragraph, '\0', (len + 1) * sizeof(char));
        strncpy(paragraph, text + offs, len);

        add_paragraph(doc, paragraph);
        offs += len + 1;
    }

    return *doc;
}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    return Doc.data[n - 1].data[m - 1].data[k - 1];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) { 
    return Doc.data[m - 1].data[k - 1];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k - 1];
}