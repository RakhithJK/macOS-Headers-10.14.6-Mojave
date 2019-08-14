//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INFileURLEnumerable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface INMessageAttachment : NSObject <INFileURLEnumerable, NSCopying, NSSecureCoding>
{
    NSString *_filename;
    long long _type;
    NSURL *_fileURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithFilename:(id)arg1 type:(long long)arg2 fileURL:(id)arg3;
- (void)_enumerateFileURLsWithMutatingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

