//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>
#import <LinkPresentation/_LPResolvable-Protocol.h>

@class NSString, NSURL;

@interface LPImageMetadata : NSObject <_LPResolvable, NSSecureCoding>
{
    unsigned int _version;
    NSURL *_URL;
    NSString *_type;
    NSString *_accessibilityText;
    struct CGSize _size;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (long long)maximumBytes;
- (BOOL)isValidMIMEType:(id)arg1;
- (id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

