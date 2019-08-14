//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FPFSHelpers)
- (id)fp_withReadWriteAccess:(CDUnknownBlockType)arg1;
- (BOOL)fp_deleteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fp_coordinatedDeleteWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)fp_createSubFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fp_renameWithNewName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fp_trashUnderFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fp_reparentUnderFolder:(id)arg1 allowBouncing:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)fp_reparentUnderFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fp_importUnderFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)fp_existingURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2;
- (id)fp_existingURLOfChildWithName:(id)arg1;
@end

