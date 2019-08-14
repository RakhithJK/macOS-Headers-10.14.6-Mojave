//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFLocalToRemotePusher : NSObject
{
}

+ (id)_exchangePusher;
+ (id)_imapPusher;
+ (id)_remotePusherForAccountProxy:(id)arg1;
+ (id)_remotePusherForRemoteObject:(id)arg1;
+ (BOOL)deleteFolderFromRemote:(id)arg1 fromParent:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char *)arg4;
+ (BOOL)moveFolderOnRemote:(id)arg1 toParent:(id)arg2 originalParent:(id)arg3 accountProxy:(id)arg4 errorIsFatal:(char *)arg5;
+ (BOOL)updateFolderOnRemote:(id)arg1 inParent:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char *)arg4;
+ (BOOL)addFolderToRemote:(id)arg1 inParent:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char *)arg4;
+ (BOOL)deleteNoteFromRemoteWithID:(id)arg1 fromFolder:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char *)arg4;
+ (BOOL)moveNoteOnRemote:(id)arg1 toFolder:(id)arg2 originalFolder:(id)arg3 accountProxy:(id)arg4 errorIsFatal:(char *)arg5;
+ (BOOL)updateNoteOnRemote:(id)arg1 inFolder:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char *)arg4;
+ (BOOL)addNoteToRemote:(id)arg1 inFolder:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char *)arg4;

@end

