//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EWSAutodiscoverOperation, NSString;
@protocol EWSAutodiscoverBindingDelegate;

@interface EWSAutodiscoverBinding : NSObject
{
    BOOL _logsActivity;
    NSString *_host;
    id <EWSAutodiscoverBindingDelegate> _delegate;
    EWSAutodiscoverOperation *_operation;
}

@property(nonatomic) __weak EWSAutodiscoverOperation *operation; // @synthesize operation=_operation;
@property BOOL logsActivity; // @synthesize logsActivity=_logsActivity;
@property(readonly, nonatomic) __weak id <EWSAutodiscoverBindingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1;
- (id)init;
- (id)initWithHost:(id)arg1 delegate:(id)arg2;

@end

