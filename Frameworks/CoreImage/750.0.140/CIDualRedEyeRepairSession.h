//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, CIImage, CIRenderDestination, NSArray, NSDate, NSDictionary;

@interface CIDualRedEyeRepairSession : NSObject
{
    CIContext *context;
    struct __CVBuffer *primary;
    CIRenderDestination *destination;
    NSDictionary *metadata;
    NSDictionary *imageProperties;
    NSArray *faces;
    NSDictionary *filterTuning;
    NSDictionary *sessionTuning;
    NSDate *timestamp;
    CIImage *_primaryImage;
}

+ (id)sessionParametersForTuning:(unsigned long long)arg1;
+ (id)repairParametersForTuning:(unsigned long long)arg1;
+ (id)defaultRepairParameters;
+ (id)defaultSessionParameters;
+ (id)_contextRGBAh;
@property(retain, nonatomic) CIImage *primaryImage; // @synthesize primaryImage=_primaryImage;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSDictionary *sessionTuning; // @synthesize sessionTuning;
@property(retain, nonatomic) NSDictionary *filterTuning; // @synthesize filterTuning;
@property(retain, nonatomic) NSArray *faces; // @synthesize faces;
@property(retain, nonatomic) NSDictionary *imageProperties; // @synthesize imageProperties;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata;
@property(retain, nonatomic) CIRenderDestination *destination; // @synthesize destination;
@property(retain, nonatomic) struct __CVBuffer *primary; // @synthesize primary;
@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (void)_dump420f:(struct __CVBuffer *)arg1 tag:(id)arg2;
- (void)_dump:(id)arg1 tag:(id)arg2;
- (id)dumpfilepathWithTag:(id)arg1 andExtension:(id)arg2;
- (_Bool)_repairPrimaryWithSecondary:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2;
- (_Bool)repairPrimaryWithSecondary:(struct __CVBuffer *)arg1;
- (_Bool)setPrimary:(struct __CVBuffer *)arg1 observations:(id)arg2 metadata:(id)arg3;
- (void)setTuningFromMetadata:(id)arg1;
- (_Bool)prepareRepair;
- (void)cleanupState;
- (void)dealloc;
- (id)init;

@end

