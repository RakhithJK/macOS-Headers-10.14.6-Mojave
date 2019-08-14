//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface PFZipLocalFileHeader : NSObject
{
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    NSString *_filename;
    NSData *_extraFieldData;
}

@property(retain, nonatomic) NSData *extraFieldData; // @synthesize extraFieldData=_extraFieldData;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) unsigned short extraFieldLength; // @synthesize extraFieldLength=_extraFieldLength;
@property(readonly, nonatomic) unsigned short filenameLength; // @synthesize filenameLength=_filenameLength;
@property(nonatomic) unsigned int uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property(nonatomic) unsigned int compressedSize; // @synthesize compressedSize=_compressedSize;
@property(nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
@property(nonatomic) unsigned short lastModDate; // @synthesize lastModDate=_lastModDate;
@property(nonatomic) unsigned short lastModTime; // @synthesize lastModTime=_lastModTime;
@property(nonatomic) unsigned short compressionMethod; // @synthesize compressionMethod=_compressionMethod;
@property(nonatomic) unsigned short generalPurposeBit; // @synthesize generalPurposeBit=_generalPurposeBit;
@property(nonatomic) unsigned short versionNeededToExtract; // @synthesize versionNeededToExtract=_versionNeededToExtract;
- (void)appendToData:(id)arg1;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned int totalHeaderLength;
- (id)description;
- (void)dealloc;
- (id)init;

@end

