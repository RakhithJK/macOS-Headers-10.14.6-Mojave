//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICNote.h>

@interface ICNote (Scripting)
- (BOOL)isPasswordProtectedAndLocked;
- (id)scriptingObject;
- (void)setScriptingBody:(id)arg1;
- (id)scriptingBody;
- (id)scriptingID;
- (void)setName:(id)arg1;
- (id)name;
- (void)removeObjectFromScriptingAttachmentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inScriptingAttachmentsAtIndex:(unsigned long long)arg2;
- (id)scriptingAttachments;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)objectSpecifier;
@end

