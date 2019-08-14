//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTInvalidationSet, QTMovie, QTTrackHelper;

@interface QTTrack : NSObject
{
    long long _flags;
    QTTrackHelper *_trackHelper;
    QTMovie *_movie;
    QTInvalidationSet *_children;
    int _cachedTrackID;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
    long long _reserved4;
}

+ (id)attributeKeysDisallowedForWritingUnderPlaybackAPIRestriction;
+ (id)attributeKeysDisallowedForReadingUnderPlaybackAPIRestriction;
+ (id)allWritableAttributeKeysForVisibility:(unsigned long long)arg1;
+ (id)allReadableAttributeKeysForVisibility:(unsigned long long)arg1;
+ (id)trackWithTrackID:(long long)arg1 error:(id *)arg2 andMovie:(id)arg3;
+ (id)trackWithProxy:(int)arg1;
- (CDStruct_900afa40)keyframeStartTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)frameEndTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)frameStartTime:(CDStruct_900afa40)arg1;
- (void)setExtendedLanguageTagString:(id)arg1;
- (id)extendedLanguageTagString;
- (void)setCanDRMInteractWithUser:(BOOL)arg1;
- (BOOL)canDRMInteractWithUser;
- (BOOL)isDRMAuthorized;
- (BOOL)isDRMProtected;
- (void)setUndoAttributes:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)undoAttributes;
- (id)undoManager;
- (void)unregisterForPropertyChanges;
- (void)registerForPropertyChanges;
- (float)streamingBufferDuration;
- (float)streamingPercentLost;
- (long long)streamingBitsPerSecond;
- (id)streamAtIndex:(int)arg1;
- (id)streams;
- (BOOL)addCVImageBuffer:(struct __CVBuffer *)arg1 forRange:(CDStruct_977f9211)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (void)addImage:(id)arg1 forDuration:(CDStruct_900afa40)arg2 atTime:(CDStruct_900afa40)arg3 withAttributes:(id)arg4;
- (void)addImage:(id)arg1 forDuration:(CDStruct_900afa40)arg2 withAttributes:(id)arg3;
- (void)scaleSegment:(CDStruct_977f9211)arg1 newDuration:(CDStruct_900afa40)arg2;
- (void)deleteSegment:(CDStruct_977f9211)arg1;
- (void)insertEmptySegmentAt:(CDStruct_977f9211)arg1;
- (void)insertSegmentOfTrack:(id)arg1 fromRange:(CDStruct_977f9211)arg2 scaledToRange:(CDStruct_977f9211)arg3;
- (void)insertSegmentOfTrack:(id)arg1 timeRange:(CDStruct_977f9211)arg2 atTime:(CDStruct_900afa40)arg3;
- (void)removeApertureModeDimensions;
- (void)generateApertureModeDimensions;
- (void)setApertureModeDimensions:(struct CGSize)arg1 forMode:(id)arg2;
- (struct CGSize)apertureModeDimensionsForMode:(id)arg1;
- (BOOL)hasApertureModeDimensions;
- (void)setMuted:(BOOL)arg1;
- (BOOL)muted;
- (void)setTreble:(float)arg1;
- (void)setGain:(float)arg1;
- (void)setBass:(float)arg1;
- (void)setBalance:(float)arg1;
- (float)treble;
- (float)gain;
- (float)bass;
- (float)balance;
- (id)depthString;
- (BOOL)hasMPEGCharacteristics;
- (int)proxy;
- (BOOL)restrictedToPlaybackAPI;
- (void)setRestrictedToPlaybackAPI:(BOOL)arg1;
- (BOOL)usesQuickTime;
- (BOOL)usesFigMedia;
- (id)trackHelper;
- (void)setTrackHelper:(id)arg1;
- (CDStruct_900afa40)mediaTimeForTrackTime:(CDStruct_900afa40)arg1;
- (short)setProperty:(unsigned int)arg1 propertyID:(unsigned int)arg2 propertySize:(unsigned long long)arg3 propertyValuePtr:(void *)arg4;
- (short)property:(unsigned int)arg1 propertyID:(unsigned int)arg2 propertySize:(unsigned long long)arg3 propertyValuePtr:(void *)arg4;
- (struct SoundDescriptionV2 **)getSoundDescriptionV2Handle:(long long)arg1;
- (struct SoundDescriptionV2 **)getSoundDescriptionV2Handle;
- (struct SampleDescription **)getSampleDescriptionHandle:(long long)arg1;
- (struct SampleDescription **)getSampleDescriptionHandle;
- (int)index;
- (void)setTrebleGain:(int)arg1;
- (void)setBassGain:(int)arg1;
- (BOOL)isAudioVariableRate;
- (BOOL)isTimeCodeDropFrame;
- (BOOL)isTimeCode;
- (id)timeCodeTrack;
- (id)timeCodeStringForTime:(CDStruct_900afa40)arg1;
- (BOOL)isExcludedFromAutoSelection;
- (id)isoLanguageCodeAsString;
- (long long)isoLanguageCode;
- (id)dataFormat;
- (id)metaDataDisplayName;
- (id)subtitlesLanguageString;
- (float)displayedHeight;
- (float)displayedWidth;
- (void)setPlayerTransparency:(float)arg1;
- (float)playerTransparency;
- (void)setOperationColorWithNSColor:(id)arg1;
- (id)operationColorAsNSColor;
- (void)resetMatrix;
- (void)setMatrixData:(id)arg1;
- (id)defaultMatrixAsData;
- (id)currentMatrixAsData;
- (id)matrixAsData;
- (void)setWidth:(int)arg1 height:(int)arg2;
- (float)currentHeight:(long long)arg1;
- (float)currentWidth:(long long)arg1;
- (float)naturalHeight;
- (float)naturalWidth;
- (void)setVerticalOffset:(float)arg1;
- (void)setHorizontalOffset:(float)arg1;
- (float)verticalOffset;
- (float)horizontalOffset;
- (void)setCurrentHeight:(float)arg1 sizeMode:(long long)arg2 preserveAspect:(BOOL)arg3;
- (void)setCurrentWidth:(float)arg1 sizeMode:(long long)arg2 preserveAspect:(BOOL)arg3;
- (void)skew:(struct CGPoint)arg1 around:(struct CGPoint)arg2;
- (void)scale:(float)arg1 around:(struct CGPoint)arg2;
- (void)rotate:(double)arg1 around:(struct CGPoint)arg2;
- (void)rotate:(double)arg1;
- (void)flipY;
- (void)flipX;
- (void)setTransformedQuad:(struct QTPFixedQuad)arg1;
- (void)setTransformationMatrix:(struct MatrixRecord)arg1;
- (struct QTPFixedQuad)transformedQuad;
- (struct QTPFixedQuad)defaultQuad;
- (struct MatrixRecord)transformationMatrix;
- (void)clearMask;
- (void)invertMask;
- (void)setMaskImage:(id)arg1;
- (void)setMaskWithDataRef:(id)arg1;
- (id)maskImage;
- (BOOL)hasMask;
- (struct Rect)defaultRect;
- (struct MatrixRecord)defaultMatrix;
- (long long)languageAsMacOrMP4Code;
- (id)userDataAnnotations;
- (id)sampleRateString;
- (id)sampleSizeString;
- (id)channels;
- (id)format;
- (id)audioFormatString;
- (id)videoFormatString;
- (void)setReference:(id)arg1 refType:(unsigned int)arg2 index:(long long)arg3;
- (void)setAlternate:(id)arg1;
- (void)setSourcePosition:(struct CGPoint)arg1;
- (void)setMask:(id)arg1;
- (void)setChapterlist:(id)arg1;
- (void)setAnnotation:(id)arg1 ofType:(unsigned int)arg2;
- (void)setAffineTransform:(struct CGAffineTransform)arg1;
- (void)setMatrix:(struct MatrixRecord)arg1;
- (void)setOperationColor:(struct RGBColor)arg1;
- (struct RGBColor)operationColor;
- (void)setTransferMode:(long long)arg1 withColor:(id)arg2;
- (void)setLanguage:(long long)arg1;
- (void)setTransferMode:(long long)arg1;
- (void)setLayer:(short)arg1;
- (void)setHref:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setOffset:(CDStruct_900afa40)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setSourceDimensions:(struct CGSize)arg1;
- (void)setCurrentSize:(struct CGSize)arg1;
- (void)setDimensions:(struct CGSize)arg1;
- (void)setScaledBounds:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)formatSummary;
- (id)referenceByType:(unsigned int)arg1 index:(long long)arg2;
- (id)alternate;
- (struct CGPoint)sourcePosition;
- (struct CGSize)sourceDimensions;
- (id)mask;
- (id)chapterlist;
- (BOOL)isChapterTrack;
- (void)setPreloadHint:(BOOL)arg1;
- (void)setNeverPurgeHint:(BOOL)arg1;
- (void)setSingleFieldVideo:(BOOL)arg1;
- (void)setDeinterlaceVideo:(BOOL)arg1;
- (void)setHighQualityVideo:(BOOL)arg1;
- (BOOL)preloadHint;
- (BOOL)neverPurgeHint;
- (BOOL)singleFieldVideo;
- (BOOL)deinterlaceVideo;
- (BOOL)highQualityVideo;
- (void)setAnnotations:(id)arg1;
- (id)annotations;
- (struct CGAffineTransform)affineTransform;
- (struct MatrixRecord)matrix;
- (int)dataRate;
- (unsigned long long)dataSize;
- (struct CGSize)naturalSize;
- (struct CGSize)currentSize;
- (long long)language;
- (long long)transferMode;
- (id)href;
- (BOOL)hasWiredActions;
- (BOOL)hasAudio;
- (BOOL)isVisual;
- (void)setUsageInPreview:(BOOL)arg1;
- (void)setUsageInPoster:(BOOL)arg1;
- (void)setUsageInMovie:(BOOL)arg1;
- (BOOL)usageInPreview;
- (BOOL)usageInPoster;
- (BOOL)usageInMovie;
- (long long)timeScale;
- (void)setPreloadRange:(CDStruct_977f9211)arg1;
- (void)setRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)preloadRange;
- (CDStruct_977f9211)range;
- (id)mediaSubType;
- (id)mediaTypeInMedia;
- (id)mediaType;
- (short)layer;
- (long long)trackID;
- (int)audioSampleSize;
- (float)audioSampleRate;
- (int)audioChannelCount;
- (struct AudioStreamBasicDescription *)audioStreamBasicDescription;
- (struct AudioChannelLayout *)audioChannelLayout;
- (int)depth;
- (id)mediaName;
- (id)codecName;
- (id)displayNameShort;
- (id)displayName;
- (id)fullName;
- (float)floatFrameRate;
- (int)fixedFrameRate;
- (long long)frameRate;
- (CDStruct_900afa40)offset;
- (struct CGPoint)position;
- (struct CGSize)dimensions;
- (id)modificationTime;
- (id)creationTime;
- (struct CGRect)scaledBounds;
- (struct CGRect)bounds;
- (id)description;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)dispose;
- (int)objectToken;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)setTrackAttributes:(id)arg1;
- (id)trackAttributes;
- (BOOL)_isAttributeAvailableForWriting:(id)arg1 exception:(id *)arg2;
- (BOOL)_isAttributeAvailableForReading:(id)arg1 exception:(id *)arg2;
- (id)mediaRetained;
- (id)media;
- (id)movie;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_forgetAboutStream:(id)arg1;
- (void)_learnAboutStream:(id)arg1;
- (void)_forgetAboutMedia:(id)arg1;
- (void)_learnAboutMedia:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTrackHelper:(id)arg1 error:(id *)arg2;
- (id)initWithTrackID:(long long)arg1 error:(id *)arg2 andMovie:(id)arg3;
- (id)initWithProxy:(int)arg1;
- (long long)userDataCountOfType:(unsigned int)arg1;
- (BOOL)addUserData:(id)arg1 ofType:(unsigned int)arg2;
- (BOOL)setUserData:(id)arg1 ofType:(unsigned int)arg2 atIndex:(long long)arg3;
- (BOOL)setUserData:(id)arg1 ofType:(unsigned int)arg2;
- (id)userDataOfType:(unsigned int)arg1 atIndex:(long long)arg2;
- (id)userDataOfType:(unsigned int)arg1;
- (struct UserDataRecord **)userDataRef;
- (BOOL)setColorProfile:(id)arg1 ofType:(id)arg2;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (BOOL)setMetadata:(id)arg1 forFormat:(id)arg2;
- (BOOL)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id *)arg3;

@end
