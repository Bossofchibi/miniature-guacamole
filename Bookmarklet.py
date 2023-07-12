import urllib.parse
javascript_code = '''
// Get the current page's title and URL
var title = document.title;
var url = window.location.href;

// Encode the title and URL for use in a URL
var encoded_title = encodeURIComponent(title);
var encoded_url = encodeURIComponent(url);

// Open a new window with the encoded title and URL in the query string
window.open('https://notascam.com/bookmark?title=Testing' + encoded_title + '&url=' + encoded_url);
'''
encoded_javascript_code = urllib.parse.quote(javascript_code)
print('javascript:' + encoded_javascript_code)
