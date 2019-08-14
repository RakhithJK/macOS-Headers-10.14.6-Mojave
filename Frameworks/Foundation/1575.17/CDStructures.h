//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSBundle, NSDate, NSISEngine, NSIndexSet, NSMutableIndexSet, NSObject, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEDesc {
    unsigned int descriptorType;
    struct OpaqueAEDataStorageType **dataHandle;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct InodeDevPair {
    int dev;
    unsigned long long inode;
};

struct NSEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NSObject {
    Class _field1;
};

struct NSSlice {
    void **items;
    char wantsStrong;
    char wantsWeak;
    char wantsARC;
    char shouldCopyIn;
    char usesStrong;
    char usesWeak;
    char usesARC;
    char usesSentinel;
    char pointerPersonality;
    char integerPersonality;
    char simpleReadClear;
    CDUnknownFunctionPointerType sizeFunction;
    CDUnknownFunctionPointerType hashFunction;
    CDUnknownFunctionPointerType isEqualFunction;
    CDUnknownFunctionPointerType describeFunction;
    CDUnknownFunctionPointerType acquireFunction;
    CDUnknownFunctionPointerType relinquishFunction;
    CDUnknownFunctionPointerType allocateFunction;
    CDUnknownFunctionPointerType freeFunction;
    CDUnknownFunctionPointerType readAt;
    CDUnknownFunctionPointerType clearAt;
    CDUnknownFunctionPointerType storeAt;
};

struct OpaqueAEDataStorageType;

struct _NSLTToken {
    unsigned short _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned int _field4;
    union {
        void *_field1;
        struct {
            unsigned char _field1;
            unsigned char _field2;
        } _field2;
    } _field5;
};

struct _NSOrderedChange;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSRefCountedRunArray {
    struct os_unfair_lock_s _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct _NSRunArrayItem _field8[0];
};

struct _NSRunArrayItem {
    unsigned long long _field1;
    id _field2;
};

struct _NSSimpleAttributeDictionaryElement {
    unsigned long long hash;
    id key;
    id value;
};

struct _NSStringBuffer {
    unsigned long long _field1;
    unsigned long long _field2;
    id _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned short _field6[32];
    unsigned short _field7;
    unsigned short _field8;
};

struct _TidyDoc {
    int _field1;
};

struct _TidyNode {
    int _field1;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _ftsent {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent *_field3;
    long long _field4;
    void *_field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned long long _field12;
    int _field13;
    unsigned short _field14;
    short _field15;
    unsigned short _field16;
    unsigned short _field17;
    unsigned short _field18;
    struct stat *_field19;
    char _field20[1];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _xmlAttr;

struct _xmlDict;

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlDoc *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    void *_field10;
    void *_field11;
    void *_field12;
    void *_field13;
    char *_field14;
    char *_field15;
    void *_field16;
};

struct _xmlElementContent {
    int _field1;
    int _field2;
    char *_field3;
    struct _xmlElementContent *_field4;
    struct _xmlElementContent *_field5;
    struct _xmlElementContent *_field6;
    char *_field7;
};

struct _xmlHashTable;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

struct _xmlParserCtxt {
    struct _xmlSAXHandler *_field1;
    void *_field2;
    struct _xmlDoc *_field3;
    int _field4;
    int _field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    struct _xmlParserInput *_field10;
    int _field11;
    int _field12;
    struct _xmlParserInput **_field13;
    struct _xmlNode *_field14;
    int _field15;
    int _field16;
    struct _xmlNode **_field17;
    int _field18;
    struct _xmlParserNodeInfoSeq {
        unsigned long long _field1;
        unsigned long long _field2;
        struct _xmlParserNodeInfo *_field3;
    } _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
    struct _xmlValidCtxt _field26;
    int _field27;
    int _field28;
    char *_field29;
    char *_field30;
    int _field31;
    int _field32;
    char **_field33;
    long long _field34;
    long long _field35;
    int _field36;
    int _field37;
    int _field38;
    char *_field39;
    char *_field40;
    char *_field41;
    int *_field42;
    int _field43;
    int _field44;
    int *_field45;
    int _field46;
    struct _xmlParserInput *_field47;
    int _field48;
    int _field49;
    int _field50;
    int _field51;
    void *_field52;
    int _field53;
    int _field54;
    void *_field55;
    int _field56;
    int _field57;
    struct _xmlDict *_field58;
    char **_field59;
    int _field60;
    int _field61;
    char *_field62;
    char *_field63;
    char *_field64;
    int _field65;
    int _field66;
    int _field67;
    char **_field68;
    int *_field69;
    void **_field70;
    struct _xmlHashTable *_field71;
    struct _xmlHashTable *_field72;
    int _field73;
    int _field74;
    int _field75;
    int _field76;
    struct _xmlNode *_field77;
    int _field78;
    struct _xmlAttr *_field79;
    struct _xmlError {
        int _field1;
        int _field2;
        char *_field3;
        int _field4;
        char *_field5;
        int _field6;
        char *_field7;
        char *_field8;
        char *_field9;
        int _field10;
        int _field11;
        void *_field12;
        void *_field13;
    } _field80;
    int _field81;
    unsigned long long _field82;
    unsigned long long _field83;
    struct _xmlParserNodeInfo *_field84;
    int _field85;
    int _field86;
    struct _xmlParserNodeInfo *_field87;
    int _field88;
    unsigned long long _field89;
};

struct _xmlParserInput {
    struct _xmlParserInputBuffer *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    char *_field5;
    char *_field6;
    int _field7;
    int _field8;
    int _field9;
    unsigned long long _field10;
    CDUnknownFunctionPointerType _field11;
    char *_field12;
    char *_field13;
    int _field14;
    int _field15;
};

struct _xmlParserInputBuffer;

struct _xmlParserNodeInfo;

struct _xmlSAXHandler {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
    CDUnknownFunctionPointerType _field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownFunctionPointerType _field27;
    unsigned int _field28;
    void *_field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownFunctionPointerType _field31;
    CDUnknownFunctionPointerType _field32;
};

struct _xmlTextReader {
    int _field1;
    struct _xmlDoc *_field2;
    int _field3;
    int _field4;
    int _field5;
    struct _xmlParserCtxt *_field6;
    struct _xmlSAXHandler *_field7;
    struct _xmlParserInputBuffer *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    unsigned int _field15;
    unsigned int _field16;
    struct _xmlNode *_field17;
    struct _xmlNode *_field18;
    int _field19;
    struct _xmlNode *_field20;
    int _field21;
    struct _xmlBuffer *_field22;
    struct _xmlDict *_field23;
    struct _xmlNode *_field24;
    int _field25;
    int _field26;
    struct _xmlNode **_field27;
    CDUnknownFunctionPointerType _field28;
    void *_field29;
    struct _xmlRelaxNG *_field30;
    struct _xmlRelaxNGValidCtxt *_field31;
    int _field32;
    int _field33;
    struct _xmlNode *_field34;
    struct _xmlSchema *_field35;
    struct _xmlSchemaValidCtxt *_field36;
    int _field37;
    int _field38;
    struct _xmlSchemaSAXPlug *_field39;
    int _field40;
    char *_field41;
    struct _xmlXIncludeCtxt *_field42;
    int _field43;
    int _field44;
    int _field45;
    struct _xmlPattern **_field46;
    int _field47;
    int _field48;
    CDUnknownFunctionPointerType _field49;
};

struct _xmlValidCtxt {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    struct _xmlNode *_field4;
    int _field5;
    int _field6;
    struct _xmlNode **_field7;
    unsigned int _field8;
    struct _xmlDoc *_field9;
    int _field10;
    struct _xmlValidState *_field11;
    int _field12;
    int _field13;
    struct _xmlValidState *_field14;
    struct _xmlAutomata *_field15;
    struct _xmlAutomataState *_field16;
};

struct _xmlValidState;

struct addrinfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    char *_field6;
    struct sockaddr *_field7;
    struct addrinfo *_field8;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr;

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    long long _field5;
    id _field6;
    id _field7;
    id _field8;
} CDStruct_4f05a0fa;

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
} CDStruct_89ddc8e1;

typedef struct {
    id _field1;
    id _field2;
    unsigned int _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    char _field12;
    id _field13;
    id _field14;
} CDStruct_f48a3400;

typedef struct {
    id _field1;
    id _field2;
    unsigned int _field3;
    unsigned int _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    char _field9;
    id _field10;
    id _field11;
    id _field12;
} CDStruct_1e3abd2a;

typedef struct {
    id _field1;
    id _field2;
    char _field3;
    char _field4;
} CDStruct_4cb9d06e;

typedef struct {
    id _field1;
    id _field2;
} CDStruct_a70f6672;

typedef struct {
    NSBundle *bundle;
    unsigned int appleEventCode;
    NSArray *classDescriptions;
    NSArray *commandDescriptions;
    NSArray *typeDescriptions;
    NSString *presentableDescription;
    NSObject *presentableNameOrNames;
    char isHidden;
    NSArray *accessGroupDescriptions;
} CDStruct_7ffc63f5;

typedef struct {
    id _field1;
    void *_field2;
    long long _field3;
} CDStruct_4829dca9;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned int value;
} CDStruct_fcd6c539;

typedef struct {
    unsigned long long kind;
    NSObject *oldValue;
    NSObject *newValue;
    NSIndexSet *indexes;
    id extraData;
} CDStruct_e173081d;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long offset;
    int type;
} CDStruct_1b1be194;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    unsigned short *_field1;
    long long _field2;
    unsigned short *_field3;
    long long _field4;
    unsigned short *_field5;
    long long _field6;
} CDStruct_177dfe65;

typedef struct {
    unsigned int :8;
    unsigned int :4;
    unsigned int :1;
    unsigned int :1;
    unsigned int :18;
    unsigned short _field1[8];
} CDStruct_5fe7aead;

typedef struct {
    char _field1;
    char _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned int _field6;
} CDStruct_37137064;

typedef struct {
    double m11;
    double m12;
    double m21;
    double m22;
    double tX;
    double tY;
} CDStruct_56a8f59f;

typedef struct {
    long long _field1;
    id _field2;
    id _field3;
} CDStruct_1b4a36b4;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct CDStruct_183601bc;

typedef struct {
    NSISEngine *engine;
    CDStruct_183601bc *storage;
} CDStruct_a8d20eab;

typedef struct {
    unsigned int creatorCode;
    unsigned int fileTypeCode;
    NSDate *creationDate;
    struct _fields {
        unsigned int creatorCode:1;
        unsigned int fileTypeCode:1;
        unsigned int extensionHidden:1;
        unsigned int creationDate:1;
        unsigned int fileBusy:1;
        unsigned int reserved:27;
    } validFields;
    char extensionHidden;
    char fileBusy;
    char _padding[2];
} CDStruct_4352dce8;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    CDStruct_183601bc *_field6;
} CDStruct_fee1177a;

typedef struct {
    CDStruct_183601bc *blocks;
    unsigned long long blocksCount;
    unsigned long long blocksCapacity;
    NSMutableIndexSet *freeIndexes;
} CDStruct_fb1e53bb;

typedef struct {
    id objects;
    char isMutable;
    struct {
        struct _NSOrderedChange *buffer;
        unsigned long long availableIndex;
        unsigned long long capacity;
        unsigned long long changesIndex;
        unsigned long long lastIndex;
        unsigned long long count;
    } list;
} CDStruct_a8bf7a6a;

typedef struct {
    unsigned short inline_capacity;
    unsigned int var_count;
    double constant;
    union {
        struct {
            id stored_extern_marker;
            CDStruct_183601bc *slab;
            unsigned long long capacity;
        } extern_data;
        struct {
            unsigned long long aligner;
        } inline_slab;
        unsigned char padding[48];
    } data;
} CDStruct_9ac54d62;

#pragma mark Typedef'd Unions

typedef union {
    struct __MDItem *_field1;
    id _field2;
    id _field3;
} CDUnion_7d5f215e;

