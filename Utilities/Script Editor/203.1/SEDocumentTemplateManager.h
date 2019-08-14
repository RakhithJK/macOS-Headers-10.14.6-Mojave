//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFileManagerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class NSArray, NSString;

@interface SEDocumentTemplateManager : NSObject <NSMenuDelegate, NSFileManagerDelegate>
{
    NSArray *_copyTemplateOmitFiles;
}

+ (void)initialize;
- (void)newDocumentFromTemplate:(id)arg1;
- (void)openDocumentTemplateFolder:(id)arg1;
- (void)instantiateTemplateURL:(id)arg1;
- (BOOL)fileManager:(id)arg1 shouldCopyItemAtURL:(id)arg2 toURL:(id)arg3;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_removeTemplateMenuItemsFromMenu:(id)arg1;
- (void)addTemplatesAtURL:(id)arg1 toMenu:(id)arg2 sortItems:(BOOL)arg3 sortFoldersFirst:(BOOL)arg4;
- (BOOL)_isTemplateAtURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
