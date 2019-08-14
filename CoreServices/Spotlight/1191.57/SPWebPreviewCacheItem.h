//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PRSResult, QLPreviewView;

@interface SPWebPreviewCacheItem : NSObject
{
    int _rc;
    int _row;
    int _generation;
    QLPreviewView *_previewView;
    PRSResult *_result;
}

@property int generation; // @synthesize generation=_generation;
@property int row; // @synthesize row=_row;
@property(retain) PRSResult *result; // @synthesize result=_result;
@property(retain) QLPreviewView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

