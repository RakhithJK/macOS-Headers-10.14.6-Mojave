//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSData, NSError, NSURLResponse, WAKView;

@protocol WebPluginManualLoader
- (void)pluginViewFinishedLoading:(WAKView *)arg1;
- (void)pluginView:(WAKView *)arg1 receivedError:(NSError *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedData:(NSData *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedResponse:(NSURLResponse *)arg2;
@end

