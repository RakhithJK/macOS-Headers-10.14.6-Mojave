//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSImageMultiURLReferencingRepProvider : NSObject <NSCopying>
{
    NSArray *_urls;
    NSArray *_representations;
}

@property(readonly) NSArray *urls; // @synthesize urls=_urls;
@property(readonly) NSArray *representations;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithURLs:(id)arg1;

@end

