//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CVMLRequestHandler;

@interface PVCVMLHelper : NSObject
{
    CVMLRequestHandler *_requestHandler;
}

@property(retain, nonatomic) CVMLRequestHandler *requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (id)representativenessFromFaceObservations:(id)arg1 error:(id *)arg2;
- (id)faceObservationFromFace:(id)arg1;
- (float)distanceBetweenFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;
- (id)initWithPhotoLibrary:(id)arg1;

@end

