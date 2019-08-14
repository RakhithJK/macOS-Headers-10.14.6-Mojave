//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIWindow;
@protocol WebAllowDenyPolicyListener;

__attribute__((visibility("hidden")))
@interface _UIWebGeolocationChallengeData : NSObject
{
    NSString *_token;
    NSURL *_requestingURL;
    UIWindow *_window;
    id <WebAllowDenyPolicyListener> _listener;
}

@property(retain, nonatomic) id <WebAllowDenyPolicyListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSURL *requestingURL; // @synthesize requestingURL=_requestingURL;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)dealloc;

@end

