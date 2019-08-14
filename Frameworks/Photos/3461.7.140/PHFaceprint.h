//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, RDFacePrint;

@interface PHFaceprint : NSObject
{
    long long _faceprintVersion;
    NSData *_faceprintData;
    RDFacePrint *_faceprintModel;
}

@property(readonly, nonatomic) RDFacePrint *faceprintModel; // @synthesize faceprintModel=_faceprintModel;
@property(retain, nonatomic) NSData *faceprintData; // @synthesize faceprintData=_faceprintData;
@property(nonatomic) long long faceprintVersion; // @synthesize faceprintVersion=_faceprintVersion;
- (void).cxx_destruct;
- (void)constructModelForPhotoLibrary:(id)arg1;
- (id)initWithFaceprintModel:(id)arg1;
- (id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2;

@end

