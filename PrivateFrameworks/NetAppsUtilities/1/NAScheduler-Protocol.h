//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetAppsUtilities/NSObject-Protocol.h>

@protocol NACancelable;

@protocol NAScheduler <NSObject>
- (id <NACancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <NACancelable>)performCancelableBlock:(void (^)(NACancelationToken *))arg1;
- (void)performBlock:(void (^)(void))arg1;
@end

