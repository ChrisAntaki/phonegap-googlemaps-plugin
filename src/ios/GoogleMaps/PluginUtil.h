//
//  PluginUtil.h
//  SimpleMap
//
//  Created by masashi on 11/15/13.
//
//

#ifndef MIN
#import <NSObjCRuntime.h>
#endif
#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>

@interface UIView (GoogleMapsPlugin)
- (void)setFrameWithDictionary:(NSDictionary *) params;
- (void)setFrameWithInt:(int)left top:(int)top width:(int)width height:(int)height;
@end

@interface NSArray (GoogleMapsPlugin)
- (UIColor*)parsePluginColor;
@end

@interface NSString (GoogleMapsPlugin)
- (NSString*)regReplace:(NSString*)pattern replaceTxt:(NSString*)replaceTxt options:(NSRegularExpressionOptions)options;
@end


@interface UIImage (GoogleMapsPlugin)
- (UIImage*)imageByApplyingAlpha:(CGFloat) alpha;
- (UIImage *)resize:(CGFloat)width height:(CGFloat)height;
@end

//
// Override the webViewDidFinishLoad
// http://stackoverflow.com/questions/5272451/overriding-methods-using-categories-in-objective-c#5272612
//
@interface CDVViewController (MainViewController)
- (void)webViewDidFinishLoad:(UIWebView*)theWebView;
@end


@interface PluginUtil : NSObject
+ (BOOL)isIOS7_OR_OVER;
+ (BOOL)isIOS8_OR_OVER;
+ (BOOL)isInDebugMode;
@end



@implementation UIGestureRecognizer (Cancel)
- (void)cancel {
    self.enabled = NO;
    self.enabled = YES;
}
@end
