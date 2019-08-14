//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class QTMedia;

__attribute__((visibility("hidden")))
@interface QTDataReferenceEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    QTMedia *_media;
    unsigned int index;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (id)dataReferenceEnumeratorWithQTMedia:(id)arg1;
+ (id)dataReferenceEnumeratorWithQTMovie:(id)arg1;
- (id)nextObject;
- (void)dealloc;
- (id)initWithQTMedia:(id)arg1;
- (id)initWithQTMovie:(id)arg1;
- (void)setMedia:(id)arg1;
- (void)setEnumerator:(id)arg1;

@end

