//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUImageExportFormat.h>

@class NSDictionary, NSString;

@interface NUImageExportFormatGeneric : NUImageExportFormat
{
    int _renderFormat;
    NSString *_fileType;
    NSDictionary *_options;
}

@property(copy) NSDictionary *options; // @synthesize options=_options;
@property int renderFormat; // @synthesize renderFormat=_renderFormat;
@property(copy) NSString *fileType; // @synthesize fileType=_fileType;
- (void).cxx_destruct;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileType:(id)arg1;

@end

