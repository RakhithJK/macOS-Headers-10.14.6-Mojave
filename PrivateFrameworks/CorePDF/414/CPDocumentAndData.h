//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPDocumentAndData : NSObject
{
    struct CGPDFDocument *_document;
    struct __CFData *_sourceData;
}

@property(retain) struct __CFData *sourceData; // @synthesize sourceData=_sourceData;
@property(retain) struct CGPDFDocument *document; // @synthesize document=_document;
- (void)dealloc;

@end

