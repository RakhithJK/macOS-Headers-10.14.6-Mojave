//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _ShortRect {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
};

struct _img {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned char _field5;
    unsigned char _field6[4];
};

struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>;

struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> {
    struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>> *__begin_;
    struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>> *__end_;
    struct __compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>*, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> {
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>> *__value_;
    } __end_cap_;
};

