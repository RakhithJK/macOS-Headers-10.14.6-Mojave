//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

@interface LiUpgradeProgressPushRequest : LiRequest
{
    double _progressFraction;
}

+ (unsigned char)encodingObjectType;
+ (BOOL)requiresLibrary;
@property(readonly) double progressFraction; // @synthesize progressFraction=_progressFraction;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithProgressFraction:(double)arg1;

@end

