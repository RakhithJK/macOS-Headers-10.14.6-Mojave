//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFIMAPStoreOperation.h>

@class NSArray;

@interface MFIMAPStoreFlagsOperation : MFIMAPStoreOperation
{
}

- (id)description;
@property(readonly, copy, nonatomic) NSArray *flagsToClear;
@property(readonly, copy, nonatomic) NSArray *flagsToSet;
- (unsigned char)operationType;
- (id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4;

@end

