//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider
{
    NSString *_filePath;
}

@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (BOOL)setUp;
- (id)initWithFilePath:(id)arg1;

@end

