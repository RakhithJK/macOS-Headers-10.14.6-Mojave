//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXAdResponse.h>

@class NSURL;
@protocol SXPrerollAdMetadata;

@interface SXPrerollAdResponse : SXAdResponse
{
    NSURL *_videoURL;
    double _skipDuration;
    id <SXPrerollAdMetadata> _prerollAdMetadata;
}

@property(retain, nonatomic) id <SXPrerollAdMetadata> prerollAdMetadata; // @synthesize prerollAdMetadata=_prerollAdMetadata;
@property(nonatomic) double skipDuration; // @synthesize skipDuration=_skipDuration;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;

@end

