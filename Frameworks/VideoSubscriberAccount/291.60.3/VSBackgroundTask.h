//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VSBackgroundTaskDelegate;

@interface VSBackgroundTask : NSObject
{
    NSString *_name;
    id <VSBackgroundTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <VSBackgroundTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)end;
- (BOOL)begin;
- (id)init;

@end

