//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BurstActionClassifier, BurstImageFaceAnalysisContext, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, VNImageBuffer;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface BurstImageSetInternal : NSObject
{
    NSObject<OS_dispatch_queue> *_burstAnalyzerDispatchQueue;
    NSObject<OS_dispatch_semaphore> *_pendingFramesSemaphore;
    NSObject<OS_dispatch_queue> *_yuvdumpDispatchQueue;
    int _temporalOrder;
    int _maxNumPendingFrames;
    BOOL _enableAnalysis;
    int _dummyAnalysisCount;
    BOOL _enableFaceCore;
    BOOL _enableDumpYUV;
    BOOL _isAction;
    BOOL _isPortrait;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_burstLogFileHandle;
    int _currentClusterIndexToProcess;
    NSMutableArray *_clusterArray;
    BurstImageFaceAnalysisContext *_faceAnalysisContext;
    NSCountedSet *_faceIDCounts;
    int _version;
    NSString *_burstId;
    CDUnknownBlockType _loggingCallback;
    VNImageBuffer *_overrideImage;
    NSDictionary *_overrideProps;
    NSMutableArray *_allImageIdentifiers;
    NSMutableDictionary *_statsByImageIdentifier;
    NSMutableDictionary *_clusterByImageIdentifier;
    NSString *_burstLogFileName;
    BurstActionClassifier *_actionClassifier;
    NSString *_burstCoverSelection;
    NSArray *_bestImageIdentifiersArray;
    NSString *_versionString;
}

+ (id)defaultVersionString;
@property int version; // @synthesize version=_version;
@property(retain) NSString *versionString; // @synthesize versionString=_versionString;
@property(retain) NSArray *bestImageIdentifiersArray; // @synthesize bestImageIdentifiersArray=_bestImageIdentifiersArray;
@property(retain) NSString *burstCoverSelection; // @synthesize burstCoverSelection=_burstCoverSelection;
@property(retain) BurstActionClassifier *actionClassifier; // @synthesize actionClassifier=_actionClassifier;
@property(retain) NSString *burstLogFileName; // @synthesize burstLogFileName=_burstLogFileName;
@property(retain) NSMutableDictionary *clusterByImageIdentifier; // @synthesize clusterByImageIdentifier=_clusterByImageIdentifier;
@property(retain) NSMutableDictionary *statsByImageIdentifier; // @synthesize statsByImageIdentifier=_statsByImageIdentifier;
@property(retain) NSMutableArray *allImageIdentifiers; // @synthesize allImageIdentifiers=_allImageIdentifiers;
@property(retain) NSDictionary *overrideProps; // @synthesize overrideProps=_overrideProps;
@property(retain) VNImageBuffer *overrideImage; // @synthesize overrideImage=_overrideImage;
@property(copy, nonatomic) CDUnknownBlockType loggingCallback; // @synthesize loggingCallback=_loggingCallback;
@property(retain) NSString *burstId; // @synthesize burstId=_burstId;
@property BOOL enableDumpYUV; // @synthesize enableDumpYUV=_enableDumpYUV;
@property BOOL enableFaceCore; // @synthesize enableFaceCore=_enableFaceCore;
@property int dummyAnalysisCount; // @synthesize dummyAnalysisCount=_dummyAnalysisCount;
@property BOOL enableAnalysis; // @synthesize enableAnalysis=_enableAnalysis;
@property int maxNumPendingFrames; // @synthesize maxNumPendingFrames=_maxNumPendingFrames;
@property int temporalOrder; // @synthesize temporalOrder=_temporalOrder;
@property(retain) NSMutableArray *clusterArray; // @synthesize clusterArray=_clusterArray;
@property(retain) BurstImageFaceAnalysisContext *faceAnalysisContext; // @synthesize faceAnalysisContext=_faceAnalysisContext;
@property(retain) NSCountedSet *faceIDCounts; // @synthesize faceIDCounts=_faceIDCounts;
- (void).cxx_destruct;
- (double)secondsSinceStart;
- (BOOL)isAction;
- (BOOL)isPortrait;
- (BOOL)isFaceDetectionForced;
- (id)allImageClusters;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)bestImageIdentifiers;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;
- (id)findBestImage:(id)arg1 useActionScores:(_Bool)arg2;
- (void)computeAllImageScores;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeCameraTravelDistance;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (int)computeEmotion:(id)arg1;
- (void)addImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_addImageInternal:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)processClusters:(BOOL)arg1;
- (void)_reorientFaceRects:(id)arg1 imageSize:(struct CGSize)arg2 orientation:(int)arg3;
- (struct CGRect)_reorientROIRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 orientation:(int)arg3;
- (float)computeActionSelectionThreshold;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)burstDocumentDirectory;

@end

