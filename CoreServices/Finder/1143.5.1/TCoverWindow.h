//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class TLayer;

@interface TCoverWindow : NSWindow
{
    struct TNSRef<TLayer, void> _rootLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) TLayer *rootLayer; // @dynamic rootLayer;
- (id)initWithContentRect:(const struct CGRect *)arg1;

@end

