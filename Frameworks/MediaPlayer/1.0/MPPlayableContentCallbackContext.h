//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject
{
    BOOL _serviced;
    NSIndexPath *_indexPath;
}

@property(nonatomic) BOOL serviced; // @synthesize serviced=_serviced;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)initWithIndexPath:(id)arg1;

@end

