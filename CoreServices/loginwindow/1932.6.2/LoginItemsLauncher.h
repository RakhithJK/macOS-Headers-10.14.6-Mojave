//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString;

@interface LoginItemsLauncher : NSOperation
{
    NSString *_shortName;
}

+ (id)sharedLoginItemsLauncher;
- (void)main;
- (id)shortName;
- (void)setShortName:(id)arg1;
- (void)dealloc;

@end

