//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSArray;

@interface FPUntrashOperation : FPActionOperation
{
    NSArray *_items;
    FPItem *_restoreDirectory;
    CDUnknownBlockType _untrashCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType untrashCompletionBlock; // @synthesize untrashCompletionBlock=_untrashCompletionBlock;
- (void).cxx_destruct;
- (void)presendNotifications;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end

