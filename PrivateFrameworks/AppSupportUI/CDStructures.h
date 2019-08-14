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
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NUIBoxArrangement {
    id container;
    char baselineRelative;
    long long horzDist;
    long long vertDist;
    vector_eb457d57 cells;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIBoxArrangementCell;

struct _NUIGridArrangement {
    id container;
    char baselineRelative;
    long long horzDist;
    long long vertDist;
    vector_f8404f95 cells;
    vector_b8a5df6e columns;
    vector_b8a5df6e rows;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIGridArrangementCell;

struct _NUIGridArrangementDimension;

struct _NUIGridViewDimensionConfiguration;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<NSView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<NSView *>, std::__1::allocator<std::__1::pair<NSView *const, const std::__1::pair<_NSRange, _NSRange>>>> {
    struct __tree<std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::less<NSView *>, true>, std::__1::allocator<std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<NSView *, std::__1::__value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::less<NSView *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, const std::__1::pair<NSView *, NSView *>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, const std::__1::pair<NSView *, NSView *>>>> {
    struct __tree<std::__1::__value_type<unsigned long, const std::__1::pair<NSView *, NSView *>>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, const std::__1::pair<NSView *, NSView *>>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, const std::__1::pair<NSView *, NSView *>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, const std::__1::pair<NSView *, NSView *>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, const std::__1::pair<NSView *, NSView *>>, std::__1::less<unsigned long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct nui_size_cache {
    struct pair<CGSize, CGSize> *__begin_;
    struct pair<CGSize, CGSize> *__end_;
    struct __compressed_pair<std::__1::pair<CGSize, CGSize>*, std::__1::allocator<std::__1::pair<CGSize, CGSize>>> {
        struct pair<CGSize, CGSize> *__value_;
    } __end_cap_;
};

struct objc_super {
    id receiver;
    Class super_class;
};

struct pair<CGSize, CGSize>;

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
};

struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
    struct _NUIGridViewDimensionConfiguration *__begin_;
    struct _NUIGridViewDimensionConfiguration *__end_;
    struct __compressed_pair<_NUIGridViewDimensionConfiguration *, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
        struct _NUIGridViewDimensionConfiguration *__value_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__value_;
    } __end_cap_;
} vector_eb457d57;

typedef struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
} vector_f8404f95;

typedef struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
} vector_b8a5df6e;

