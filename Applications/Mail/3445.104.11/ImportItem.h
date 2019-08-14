//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ImportItem : NSObject
{
    BOOL _isEnabled;
    NSString *_displayName;
    double _progressValue;
    double _progressStart;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) double progressStart; // @synthesize progressStart=_progressStart;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;

@end
