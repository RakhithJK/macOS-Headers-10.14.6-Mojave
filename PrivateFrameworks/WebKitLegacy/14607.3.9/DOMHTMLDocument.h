//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/DOMDocument.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLDocument : DOMDocument
{
}

- (void)releaseEvents;
- (void)captureEvents;
- (void)clear;
- (void)writeln:(id)arg1;
- (void)write:(id)arg1;
- (void)close;
- (void)open;
@property(copy) NSString *vlinkColor;
@property(copy) NSString *linkColor;
@property(copy) NSString *alinkColor;
@property(copy) NSString *fgColor;
@property(copy) NSString *bgColor;
@property(readonly, copy) NSString *compatMode;
@property(copy) NSString *designMode;
@property(copy) NSString *dir;
@property(readonly) int height;
@property(readonly) int width;
@property(readonly) DOMHTMLCollection *scripts;
@property(readonly) DOMHTMLCollection *plugins;
@property(readonly) DOMHTMLCollection *embeds;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;

@end

