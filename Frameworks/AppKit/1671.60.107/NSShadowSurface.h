//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSurface.h>

__attribute__((visibility("hidden")))
@interface NSShadowSurface : NSSurface
{
    int _height;
    char *_fill;
    BOOL _isHorizontal;
}

- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 height:(long long)arg2 fill:(const char *)arg3;
- (id)initWithView:(id)arg1 height:(long long)arg2 fill:(const char *)arg3 isHorizontal:(BOOL)arg4;

@end

