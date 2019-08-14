//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSPasteboardReading-Protocol.h>

@class NSString;

@interface NSServicesImportFromDevicePasteboardInfo : NSObject <NSPasteboardReading>
{
    id _reserved;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
@property(readonly) NSString *localizedItemName;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

