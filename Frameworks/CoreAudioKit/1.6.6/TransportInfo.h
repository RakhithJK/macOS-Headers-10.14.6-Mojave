//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/NSCopying-Protocol.h>

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface TransportInfo : NSObject <NSCopying>
{
    NSImage *image;
    NSString *name;
}

+ (id)imageForType:(unsigned int)arg1;
@property(retain) NSImage *image; // @synthesize image;
@property(retain) NSString *name; // @synthesize name;
- (BOOL)isEqualTo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTransportType:(unsigned int)arg1 name:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
