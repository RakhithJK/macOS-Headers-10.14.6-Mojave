//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
    BOOL _isMissingData;
}

@property(nonatomic) BOOL isMissingData; // @synthesize isMissingData=_isMissingData;
- (void).cxx_destruct;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;

@end

