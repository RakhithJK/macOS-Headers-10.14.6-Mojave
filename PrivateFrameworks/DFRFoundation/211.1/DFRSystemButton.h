//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext, NSString;

__attribute__((visibility("hidden")))
@interface DFRSystemButton : NSObject
{
    NSString *_identifier;
    unsigned int _on:1;
    unsigned int _enabled:1;
    long long _tintCount;
    double *_tintComponents;
    long long _bezelTintCount;
    double *_bezelTintComponents;
    struct ImageData _image;
    struct ImageData _altImage;
    CAContext *_context;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

