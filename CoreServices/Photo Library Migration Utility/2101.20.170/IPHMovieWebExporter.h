//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSLock, NSString;
@protocol IPHMovieWebExporterDelegate;

@interface IPHMovieWebExporter : NSObject
{
    id <IPHMovieWebExporterDelegate> mExporterDelegate;
    NSString *mOriginalMoviePath;
    NSLock *mLock;
    float _currentVideoConversionProgress;
    id <IPHMovieWebExporterDelegate> _currentWebExporterDelegate;
    id _currentWebExporterDelegateContext;
}

+ (id)exporterForMovieAtPath:(id)arg1;
@property id currentWebExporterDelegateContext; // @synthesize currentWebExporterDelegateContext=_currentWebExporterDelegateContext;
@property id <IPHMovieWebExporterDelegate> currentWebExporterDelegate; // @synthesize currentWebExporterDelegate=_currentWebExporterDelegate;
@property float currentVideoConversionProgress; // @synthesize currentVideoConversionProgress=_currentVideoConversionProgress;
- (void)updateProgress:(id)arg1;
- (id)trimRangeDictionaryForExportOptions:(id)arg1;
- (void)stopVideoConversionService;
- (long long)exportToPath:(id)arg1 size:(long long)arg2 delegate:(id)arg3 options:(id)arg4 context:(id)arg5;
- (long long)exportToPath:(id)arg1 size:(long long)arg2 delegate:(id)arg3 options:(id)arg4;
- (long long)exportToPath:(id)arg1 size:(long long)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)setupVideoConversionService;
- (id)initWithMovieAtPath:(id)arg1;

@end

