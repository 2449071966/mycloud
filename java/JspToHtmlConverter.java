import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.HttpURLConnection;
import java.net.URL;

public class JspToHtmlConverter {
    public static void main(String[] args) {
        String jspUrl = "http://localhost:8080/library_system_master_war/loginIn";
        String htmlFilePath = "path/to/output.html";

        try {
            // 发送 HTTP 请求获取 JSP 页面内容
            URL url = new URL(jspUrl);
            HttpURLConnection connection = (HttpURLConnection) url.openConnection();
            connection.setRequestMethod("GET");

            // 读取 JSP 页面内容
            StringBuilder jspContent = new StringBuilder();
            try (BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getInputStream()))) {
                String line;
                while ((line = reader.readLine()) != null) {
                    jspContent.append(line);
                }
            } finally {
                connection.disconnect();
            }

            // 将 JSP 页面内容写入静态 HTML 文件
            try (PrintWriter writer = new PrintWriter("D:\\admin\\桌面\\html")) {
                writer.write(jspContent.toString());
            }

            System.out.println("转换成功！生成的静态 HTML 文件路径：" + htmlFilePath);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
