//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADEmbeddedMediaFile.h>

@interface OADWavAudioFile : OADEmbeddedMediaFile
{
    float mDuration;
    BOOL mHasDuration;
}

@property(nonatomic) BOOL hasDuration; // @synthesize hasDuration=mHasDuration;
@property(nonatomic) float duration; // @synthesize duration=mDuration;
- (BOOL)isAudioOnly;
- (void)setIsAudioOnly:(BOOL)arg1;

@end

