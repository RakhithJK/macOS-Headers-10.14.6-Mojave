//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal, NSMutableArray;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AppendBuffer {
    CDUnknownFunctionPointerType *_vptr$AppendBuffer;
    struct StreamBuffer stream;
};

struct BinaryBuffer {
    CDUnknownFunctionPointerType *_vptr$AppendBuffer;
    struct StreamBuffer stream;
};

struct HeapHistoryEvent {
    struct HeapHistoryEvent *_field1;
    void *_field2;
    char _field3;
};

struct ILayerLockingPolicy {
    CDUnknownFunctionPointerType *_field1;
};

struct IndirectArgumentBufferCapabilities {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :29;
};

struct MTLCompressedPixelFormatInfo {
    unsigned long long blockBytes;
    unsigned long long blockWidth;
    unsigned long long blockHeight;
    unsigned long long blockDepth;
};

struct MTLNormalPixelFormatInfo {
    unsigned long long pixelBytes;
    unsigned char componentCount;
};

struct MTLPixelFormatInfo {
    char *name;
    unsigned int flags;
    unsigned long long castClass;
    union {
        struct MTLNormalPixelFormatInfo normal;
        struct MTLCompressedPixelFormatInfo compressed;
    } type;
};

struct MTLRenderPassAttachmentDescriptorPrivate {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field8;
    double _field9;
    unsigned int _field10;
    unsigned long long _field11;
    id _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
};

struct MTLSamplerDescriptorHashMap {
    struct unordered_map<std::__1::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned long long, 3>, unsigned int>>> _map;
    unsigned int _limit;
};

struct MTLTargetDeviceArch {
    unsigned int _field1;
    unsigned int _field2;
    char *_field3;
};

struct MemberRef;

struct ResourceTrackingDeferredAttachments {
    NSMutableArray *colorAttachments;
    MTLRenderPassDepthAttachmentDescriptorInternal *depthAttachment;
    MTLRenderPassStencilAttachmentDescriptorInternal *stencilAttachment;
};

struct StreamBuffer {
    char *bytes;
    char *pWrite;
    char *pEnd;
};

struct StructType {
    struct vector<MemberRef, std::__1::allocator<MemberRef>> _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<void *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<void *, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct deque<id, std::__1::allocator<id>> {
    struct __split_buffer<id *, std::__1::allocator<id *>> {
        id **__first_;
        id **__begin_;
        id **__end_;
        struct __compressed_pair<id **, std::__1::allocator<id *>> {
            id **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<id>> {
        unsigned long long __value_;
    } __size_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct pair<MTLDebugSharedEvent *, unsigned long long>;

struct set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>> {
    struct __tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned int, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned int>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct unique_ptr<ILayerLockingPolicy, std::__1::default_delete<ILayerLockingPolicy>> {
    struct __compressed_pair<ILayerLockingPolicy *, std::__1::default_delete<ILayerLockingPolicy>> {
        struct ILayerLockingPolicy *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<void *, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<std::__1::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned long long, 3>, unsigned int>>> {
    struct __hash_table<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned long long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *>> {
    struct __hash_table<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *>*>, std::__1::allocator<std::__1::__hash_node<void *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<void *, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<void *>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<void *>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<MTLScissorRect, std::__1::allocator<MTLScissorRect>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<MTLScissorRect *, std::__1::allocator<MTLScissorRect>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<MTLViewport, std::__1::allocator<MTLViewport>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<MTLViewport *, std::__1::allocator<MTLViewport>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<MemberRef, std::__1::allocator<MemberRef>> {
    struct MemberRef *_field1;
    struct MemberRef *_field2;
    struct __compressed_pair<MemberRef *, std::__1::allocator<MemberRef>> {
        struct MemberRef *_field1;
    } _field3;
};

struct vector<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>>> {
    struct pair<MTLDebugSharedEvent *, unsigned long long> *__begin_;
    struct pair<MTLDebugSharedEvent *, unsigned long long> *__end_;
    struct __compressed_pair<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>*, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>>> {
        struct pair<MTLDebugSharedEvent *, unsigned long long> *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int maxColorAttachments;
    unsigned int maxVertexAttributes;
    unsigned int maxVertexBuffers;
    unsigned int maxVertexTextures;
    unsigned int maxVertexSamplers;
    unsigned int maxVertexInlineDataSize;
    unsigned int maxInterpolants;
    unsigned int maxFragmentBuffers;
    unsigned int maxFragmentTextures;
    unsigned int maxFragmentSamplers;
    unsigned int maxFragmentInlineDataSize;
    unsigned int maxComputeBuffers;
    unsigned int maxComputeTextures;
    unsigned int maxComputeSamplers;
    unsigned int maxComputeInlineDataSize;
    unsigned int maxComputeLocalMemorySizes;
    unsigned int maxTotalComputeThreadsPerThreadgroup;
    unsigned int maxComputeThreadgroupMemory;
    float maxLineWidth;
    float maxPointSize;
    unsigned int maxVisibilityQueryOffset;
    unsigned int padmaxBufferLength;
    unsigned int minConstantBufferAlignmentBytes;
    unsigned int minBufferNoCopyAlignmentBytes;
    unsigned int maxTextureWidth1D;
    unsigned int maxTextureWidth2D;
    unsigned int maxTextureHeight2D;
    unsigned int maxTextureWidth3D;
    unsigned int maxTextureHeight3D;
    unsigned int maxTextureDepth3D;
    unsigned int maxTextureDimensionCube;
    unsigned int maxTextureLayers;
    unsigned int linearTextureAlignmentBytes;
    unsigned int iosurfaceTextureAlignmentBytes;
    unsigned int iosurfaceReadOnlyTextureAlignmentBytes;
    unsigned int deviceLinearTextureAlignmentBytes;
    unsigned int deviceLinearReadOnlyTextureAlignmentBytes;
    unsigned int maxFunctionConstantIndices;
    unsigned int maxComputeThreadgroupMemoryAlignmentBytes;
    unsigned int maxInterpolatedComponents;
    unsigned int maxTessellationFactor;
    unsigned int maxIndirectBuffers;
    unsigned int maxIndirectTextures;
    unsigned int maxIndirectSamplers;
    unsigned int maxIndirectSamplersPerDevice;
    unsigned int maxViewportCount;
    unsigned int maxCustomSamplePositions;
    unsigned int maxTextureBufferWidth;
    unsigned long long maxBufferLength;
} CDStruct_df0ba0f9;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned char _field1[32];
} CDStruct_5af0f983;

typedef struct {
    unsigned int :8;
    unsigned int :24;
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_4af8c268;

typedef struct {
    char isValid;
    char hasBeenUsed;
    unsigned long long type;
    id object;
    unsigned long long baseLevel;
    unsigned long long bufferLength;
    unsigned long long bufferOffset;
    unsigned long long threadgroupMemoryLength;
    unsigned long long threadgroupMemoryOffset;
    char hasLodClamp;
    float lodMinClamp;
    float lodMaxClamp;
} CDStruct_db34bedf;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct CDStruct_183601bc;

typedef struct {
    _Bool _field1;
    unsigned long long _field2;
    CDStruct_183601bc *_field3;
} CDStruct_dbc1e4aa;

typedef struct {
    struct {
        unsigned long long x;
        unsigned long long y;
        unsigned long long z;
    } origin;
    struct {
        unsigned long long width;
        unsigned long long height;
        unsigned long long depth;
    } size;
} CDStruct_1e3be3a8;

// Ambiguous groups
typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct vector<MTLScissorRect, std::__1::allocator<MTLScissorRect>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<MTLScissorRect *, std::__1::allocator<MTLScissorRect>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_dc8a7a87;

typedef struct vector<MTLViewport, std::__1::allocator<MTLViewport>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<MTLViewport *, std::__1::allocator<MTLViewport>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_9706d78e;

