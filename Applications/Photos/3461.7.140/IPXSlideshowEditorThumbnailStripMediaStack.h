//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPasteboardWriting-Protocol.h"

@class NSArray, NSString;

@interface IPXSlideshowEditorThumbnailStripMediaStack : NSObject <NSPasteboardWriting>
{
    NSArray *_indexPaths;
}

@property(readonly) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithIndexPaths:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

