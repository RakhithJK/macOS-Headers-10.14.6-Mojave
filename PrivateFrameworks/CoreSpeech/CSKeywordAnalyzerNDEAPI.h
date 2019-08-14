//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;

@interface CSKeywordAnalyzerNDEAPI : NSObject
{
    void **_ndeObject;
    NSMutableData *_currentBlob;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;
}

@property(nonatomic) __weak id <CSKeywordAnalyzerNDEAPIScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
- (void).cxx_destruct;
- (void)reset;
- (void)processAudioChunk:(id)arg1;
- (void)dealloc;
- (id)initWithBlob:(id)arg1;

@end

