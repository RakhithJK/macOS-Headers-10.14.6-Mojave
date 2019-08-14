//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICScriptingObject.h"

@class ICNote, NFNote;

@interface ICScriptingNote : ICScriptingObject
{
    ICNote *_note;
    NFNote *_legacyNote;
}

@property(retain) NFNote *legacyNote; // @synthesize legacyNote=_legacyNote;
@property(retain) ICNote *note; // @synthesize note=_note;
- (void).cxx_destruct;
- (id)handleShowScriptCommand:(id)arg1;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (void)removeObjectFromScriptingAttachmentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inScriptingAttachmentsAtIndex:(unsigned long long)arg2;
- (id)scriptingAttachments;
- (id)representedObject;
- (id)initWithLegacyNote:(id)arg1;
- (id)initWithNote:(id)arg1;

@end

