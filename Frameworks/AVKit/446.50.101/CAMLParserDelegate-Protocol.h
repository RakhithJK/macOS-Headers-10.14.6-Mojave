//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class CAMLParser, NSString, NSURL;

@protocol CAMLParserDelegate <NSObject>

@optional
- (void)CAMLParser:(CAMLParser *)arg1 formatErrorString:(const char *)arg2 arguments:(struct __va_list_tag [1])arg3 lineNumber:(unsigned long long)arg4;
- (void)CAMLParser:(CAMLParser *)arg1 formatWarningString:(const char *)arg2 arguments:(struct __va_list_tag [1])arg3 lineNumber:(unsigned long long)arg4;
- (id)CAMLParser:(CAMLParser *)arg1 evaluateScriptValue:(NSString *)arg2 sourceURL:(NSURL *)arg3 lineNumber:(unsigned int)arg4;
- (void)CAMLParser:(CAMLParser *)arg1 evaluateScriptElement:(NSString *)arg2 sourceURL:(NSURL *)arg3 lineNumber:(unsigned int)arg4;
- (Class)CAMLParser:(CAMLParser *)arg1 didFailToFindClassWithName:(NSString *)arg2;
- (id)CAMLParser:(CAMLParser *)arg1 didFailToLoadResourceFromURL:(NSURL *)arg2;
- (void)CAMLParser:(CAMLParser *)arg1 didLoadResource:(id)arg2 fromURL:(NSURL *)arg3;
- (id)CAMLParser:(CAMLParser *)arg1 resourceForURL:(NSURL *)arg2;
@end

