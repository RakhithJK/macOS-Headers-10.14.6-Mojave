//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSFont, NSMutableParagraphStyle, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct CGVector {
    double _field1;
    double _field2;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct RTFColor;

struct RTFFont;

struct RTFStyle;

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIKeyAndScopeToValueCache {
    unsigned int previousScope;
    unsigned int previousKey;
    struct UINibDecoderValue *previousValue;
};

struct UIKeyToKeyIDCache {
    NSString *previousKey[64];
    void *previousKeyID[64];
    char previousKeyExists[64];
    long long hashHits;
    long long hashHotMisses;
    long long hashColdMisses;
};

struct UINibArchiveTableInfo {
    unsigned int count;
    unsigned int offset;
};

struct UINibDecoderHeader {
    unsigned char type[10];
    unsigned int formatVersion;
    unsigned int coderVersion;
    struct UINibArchiveTableInfo objects;
    struct UINibArchiveTableInfo keys;
    struct UINibArchiveTableInfo values;
    struct UINibArchiveTableInfo classes;
};

struct UINibDecoderObjectEntry {
    unsigned int _field1;
    unsigned int _field2;
};

struct UINibDecoderRecursiveState {
    long long objectID;
    long long nextGenericKey;
    unsigned int nextValueSearchIndex;
    char replaced;
};

struct UINibDecoderValue {
    unsigned int _field1;
    unsigned int _field2;
};

struct UIStringIDTableBucket {
    id _field1;
    unsigned long long _field2;
    struct UIStringIDTableBucket *_field3;
};

struct _NSAttributeDictionaryElement {
    unsigned long long hash;
    id key;
    id value;
};

struct _NSAttributeInfo {
    unsigned int toUniCharEncoding;
    unsigned int codePageEncoding;
    NSFont *font;
    double fontSize;
    double kern;
    NSMutableParagraphStyle *paraStyle;
    unsigned int bold:1;
    unsigned int italic:1;
    unsigned int fontIsValid:1;
    unsigned int paraStyleIsValid:1;
    unsigned int kernIsValid:1;
    unsigned int attributesSameAsBefore:1;
    unsigned int multiByteEncoding:1;
    unsigned int unicodeAlternativeLength:3;
    unsigned int tabStopType:4;
    unsigned int curAttributesNeedsCopying:1;
    unsigned int paraStyleNeedsCopying:1;
    unsigned int hasWritingDirectionAttribute:1;
    unsigned int :15;
};

struct _NSDrawingParameters {
    id _field1;
    id _field2;
};

struct _NSGlyphIndexForPointCache {
    struct CGPoint point;
    void *textContainer;
    unsigned long long indexCache;
    double fractionCache;
};

struct _NSGlyphNode;

struct _NSGlyphTree {
    struct _NSGlyphNode *rootNode;
    struct _NSGlyphNode *curNode;
    unsigned long long curCharIndex;
    unsigned long long curGlyphIndex;
};

struct _NSLayoutNode;

struct _NSLayoutTree {
    struct _NSLayoutNode *rootNode;
    struct _NSLayoutNode *curNode;
    unsigned long long curGlyphIndex;
    double curLongitudinalOrigin;
    struct CGRect extraLineFragmentRect;
    struct CGRect extraLineFragmentUsedRect;
    unsigned long long glyphsPerLineEstimate;
    double offsetPerLineEstimate;
};

struct _NSRTFPriv {
    void *reader;
    char *rtfInput;
    unsigned long long rtfInputLength;
    unsigned long long rtfInputLocation;
    unsigned long long rtfHeaderEndLocation;
    int pushedChar;
    int pushedClass;
    int pushedMajor;
    int pushedMinor;
    int pushedParam;
    char pushedTextBuf[1024];
    int prevChar;
    int bumpLine;
    struct RTFFont *fontList;
    struct RTFColor *colorList;
    struct RTFStyle *styleList;
    char *inputName;
    char *outputName;
    CDUnknownFunctionPointerType ccb[5];
    CDUnknownFunctionPointerType readHook;
    CDUnknownFunctionPointerType msgProc;
    CDUnknownFunctionPointerType panicProc;
    char textBuf[1024];
    int textLen;
    int class;
    int major;
    int minor;
    int param;
    long long lineNum;
    long long linePos;
    int groupState;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSRunBlock {
    unsigned long long _field1;
    unsigned char _field2[0];
};

struct _NSStoredContainerUsage {
    struct CGRect _field1;
    struct CGRect _field2;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :29;
    } _field3;
    struct CGRect _field4;
    struct _NSRange _field5;
};

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

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    char _field3;
} CDStruct_a5183674;

typedef struct {
    int commonRowHorizontalAlignment;
    int lastRowHorizontalAlignment;
    int rowVerticalAlignment;
} CDStruct_2f5e8405;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct {
    id _field1;
    id _field2;
    long long _field3;
    long long _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    struct CGRect _field9;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :24;
    } _field10;
} CDStruct_ec8253cd;

typedef struct {
    struct *_field1;
    struct _NSRange _field2;
    struct _NSRange _field3;
    float _field4;
    float _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    struct CGRect _field14;
    struct CGRect _field15;
    struct _NSRange _field16;
    id _field17;
    double _field18;
    long long _field19;
    struct {
        unsigned int :4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :4;
        unsigned int :4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :3;
        unsigned int :7;
    } _field20;
    void *_field21[0];
} CDStruct_3fda14a5;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        double _field1;
        double _field2;
        double _field3;
        long long _field4;
    } _field1;
    struct {
        struct CGRect _field1;
    } _field2;
} CDUnion_09a75e3c;

