//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardSerializationStorage-Protocol.h>

@class NSMutableString, NSString;

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage>
{
    NSMutableString *_string;
}

+ (id)storageWithString:(id)arg1;
- (void).cxx_destruct;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (unsigned long long)currentLength;
- (void)appendData:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

