//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSTextFinderAsynchronousDocumentFindMatch-Protocol.h>

@class NSArray, NSString, NSView, WKTextFinderClient;

__attribute__((visibility("hidden")))
@interface WKTextFinderMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch>
{
    WKTextFinderClient *_client;
    NSView *_view;
    struct RetainPtr<NSArray> _rects;
    unsigned int _index;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int index;
- (void)generateTextImage:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSArray *textRects;
@property(readonly, retain, nonatomic) NSView *containingView;
- (id)initWithClient:(id)arg1 view:(id)arg2 index:(unsigned int)arg3 rects:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

